PUBLIC BAD_COMMAND_MSG
PUBLIC PW_LOW_ERRMSG
PUBLIC CRLF_MSG
PUBLIC BADDOSMSG
PUBLIC POWER_STAT1_MSG
PUBLIC POWER_OFF_MSG
PUBLIC POWER_NOID_MSG
PUBLIC POWER_ADVMAX_MSG
PUBLIC POWER_ADVREG_MSG
PUBLIC POWER_ADVMIN_MSG
PUBLIC POWER_STAT2_MSG
PUBLIC CPU_IDLE_MSG1
PUBLIC CPU_IDLE_MSG2
PUBLIC HELP_TEXT
PUBLIC OPEN_FAILED_MSG
PUBLIC STATS_FAILED_MSG
PUBLIC TOKEN_TABLE
PUBLIC BATTERY_HIGH
PUBLIC BATTERY_LOW
PUBLIC BATTERY_CRITICAL
PUBLIC BATTERY_CHARGING
PUBLIC ACLINE_STAT1
PUBLIC AC_OFFLINE_STR
PUBLIC AC_ONLINE_STR
PUBLIC ACLINE_STAT2
PUBLIC BATTERY_STATUS1
PUBLIC BATTERY_STATUS2
PUBLIC BATTERY_LIFE_STR1
PUBLIC BATTERY_LIFE_STR2

BAD_COMMAND_MSG     db "Invalid parameter - ",'$'
PW_LOW_ERRMSG       db "Invalid parameter - /low",13,10,'$'
CRLF_MSG            db 13,10,'$'
OPEN_FAILED_MSG     db 13,10,"Power Manager (POWER.EXE) not installed.",13,10,10,'$'
STATS_FAILED_MSG    db "Error accessing power manager.",13,10,'$'
BADDOSMSG           db "Incorrect DOS version",13,10,'$'
TOKEN_TABLE         db 07,00           ; number of tokens in table
                    db 09,07,"adv:max" ; token value, token len, token
                    db 08,07,"adv:reg"
                    db 05,07,"adv:min"
                    db 08,03,"adv"
                    db 02,03,"std"
                    db 01,03,"off"
                    db 0Ah,04,"/low"
ACLINE_STAT1        db 13,10,"AC Line Status : $"
ACLINE_STAT2        db 13,10,'$'
AC_OFFLINE_STR      db "OFFLINE$"
AC_ONLINE_STR       db "ONLINE$"
BATTERY_STATUS1     db 13,10,"Battery status : $"
BATTERY_STATUS2     db 13,10,'$'
BATTERY_HIGH        db "High$"
BATTERY_LOW         db "Low$"
BATTERY_CRITICAL    db "Critical$"
BATTERY_CHARGING    db "Charging$"
BATTERY_LIFE_STR1   db 13,10,"Battery life (%) : ",13,10,'$'
BATTERY_LIFE_STR2   equ CRLF_MSG
CPU_IDLE_MSG1       db "CPU: idle $"
CPU_IDLE_MSG2       db "% of time.",13,10,'$'
POWER_STAT1_MSG     db 13,10,"Power Management Status",13,10,"-----------------------",13,10,"Setting =  $"
POWER_STAT2_MSG     db 13,10,'$'
POWER_ADVMAX_MSG    db "ADV: MAX$"
POWER_ADVREG_MSG    db "ADV: REG$"
POWER_ADVMIN_MSG    db "ADV: MIN$"
POWER_OFF_MSG       db "OFF$"
POWER_NOID_MSG      db "STD$"
HELP_TEXT           db "Reduces power used by your computer.",13,10,13,10
                    db "POWER [ADV[:MAX | REG | MIN] | STD | OFF]",13,10,13,10
                    db "  ADV[:MAX | REG | MIN] --  Reduces power by  monitoring applications",13,10
                    db "      and hardware devices. MAX provides the most power conservation,",13,10
                    db "      REG  provides average power conservation,  and MIN provides the",13,10
                    db "      least conservation.",13,10
                    db "  STD -- Reduces power by monitoring hardware devices.",13,10
                    db "  OFF -- Turns off power management.",13,10,'$'

