#include <stdio.h>

int main()
{
    int status = 0;
    int operation, device, mode;

    printf("  SMART HOME SECURITY CONTROLLER \n");

    printf("\nSelect Operation:\n");
    printf("1. Activate Device\n");
    printf("2. Deactivate Device\n");
    printf("3. Check Device Status\n");
    printf("4. Toggle Device\n");
    printf("5. Security Mode\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    switch (operation)
    {
        case 1:
            printf("\nSelect Device:\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch (device)
            {
                case 1:
                    status = status | (1 << 0);
                    printf("Main Door Lock activated.\n");
                    break;

                case 2:
                    status = status | (1 << 1);
                    printf("Alarm System activated.\n");
                    break;

                case 3:
                    status = status | (1 << 2);
                    printf("CCTV Camera activated.\n");
                    break;

                case 4:
                    status = status | (1 << 3);
                    printf("Motion Sensor activated.\n");
                    break;

                default:
                    printf("Invalid device.\n");
            }
            break;

        case 2:
            printf("\nSelect Device:\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch (device)
            {
                case 1:
                    status = status & ~(1 << 0);
                    printf("Main Door Lock deactivated.\n");
                    break;

                case 2:
                    status = status & ~(1 << 1);
                    printf("Alarm System deactivated.\n");
                    break;

                case 3:
                    status = status & ~(1 << 2);
                    printf("CCTV Camera deactivated.\n");
                    break;

                case 4:
                    status = status & ~(1 << 3);
                    printf("Motion Sensor deactivated.\n");
                    break;

                default:
                    printf("Invalid device.\n");
            }
            break;

        case 3:
            printf("\nSelect Device:\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch (device)
            {
                case 1:
                    printf("Main Door Lock: %s\n",
                           (status & (1 << 0)) ? "Active" : "Inactive");
                    break;

                case 2:
                    printf("Alarm System: %s\n",
                           (status & (1 << 1)) ? "Active" : "Inactive");
                    break;

                case 3:
                    printf("CCTV Camera: %s\n",
                           (status & (1 << 2)) ? "Active" : "Inactive");
                    break;

                case 4:
                    printf("Motion Sensor: %s\n",
                           (status & (1 << 3)) ? "Active" : "Inactive");
                    break;

                default:
                    printf("Invalid device.\n");
            }
            break;

        case 4:
            printf("\nSelect Device:\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d", &device);

            switch (device)
            {
                case 1:
                    status = status ^ (1 << 0);
                    printf("Main Door Lock toggled.\n");
                    break;

                case 2:
                    status = status ^ (1 << 1);
                    printf("Alarm System toggled.\n");
                    break;

                case 3:
                    status = status ^ (1 << 2);
                    printf("CCTV Camera toggled.\n");
                    break;

                case 4:
                    status = status ^ (1 << 3);
                    printf("Motion Sensor toggled.\n");
                    break;

                default:
                    printf("Invalid device.\n");
            }
            break;

        case 5:
            printf("\nSelect Security Mode:\n");
            printf("1. Home Mode\n");
            printf("2. Away Mode\n");
            printf("3. Night Mode\n");
            printf("Enter mode: ");
            scanf("%d", &mode);

            switch (mode)
            {
                case 1:
                    status = status | (1 << 0) | (1 << 2);
                    printf("Home Mode activated.\n");
                    break;

                case 2:
                    status = status | (1 << 0) | (1 << 1) |
                             (1 << 2) | (1 << 3);
                    printf("Away Mode activated.\n");
                    break;

                case 3:
                    status = status | (1 << 0) | (1 << 1) |
                             (1 << 3);
                    printf("Night Mode activated.\n");
                    break;

                default:
                    printf("Invalid security mode.\n");
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    printf("\n DEVICE STATUS \n");

    printf("Binary Status: %d%d%d%d\n",
           (status & 8) ? 1 : 0,
           (status & 4) ? 1 : 0,
           (status & 2) ? 1 : 0,
           (status & 1) ? 1 : 0);

    printf("Main Door Lock: %s\n",
           (status & 1) ? "Active" : "Inactive");

    printf("Alarm System: %s\n",
           (status & 2) ? "Active" : "Inactive");

    printf("CCTV Camera: %s\n",
           (status & 4) ? "Active" : "Inactive");

    printf("Motion Sensor: %s\n",
           (status & 8) ? "Active" : "Inactive");

    if ((status & 1) && (status & 2) &&
        (status & 4) && (status & 8))
    {
        printf("Security System: FULLY ARMED\n");
    }
    else
    {
        printf("Security System: NOT FULLY ARMED\n");
    }

    return 0;
}