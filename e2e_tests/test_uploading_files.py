from .client import Client
from .const import PROJECT_DIR


def test_uploading_files(http_duck: Client):
    parquet = f"{PROJECT_DIR}/e2e_tests/data/range.parquet"

    res = http_duck.execute_query("FROM 'range.parquet'", files=[parquet])

    assert res["rows"] == 42
