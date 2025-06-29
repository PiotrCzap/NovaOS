import psutil
import GPUtil


physical_cores = psutil.cpu_count(logical=False)
logical_cores = psutil.cpu_count(logical=True)
memory = psutil.virtual_memory().total
system_version = "1.0"