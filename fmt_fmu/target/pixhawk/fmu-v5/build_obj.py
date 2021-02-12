# Build object lists

DRIVERS = [
    'gpio/*.c',
    'systick/st/f7_systick.c',
    'usart/*.c',
]

DRIVERS_CPPPATH = []

HAL = [
    'pin/*.c',
    'serial/*.c',
    'systick/*.c',
]

HAL_CPPPATH = []

MODULES = [
    'Console/*.c',
    'LED/*.c',
    'System/*.c',
]

MODULES_CPPPATH = []

TASKS = [
    'simple/*.c'
]

TASKS_CPPPATH = []
