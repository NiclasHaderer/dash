from e2e_tests.client import Client, ResponseFormat

from e2e_tests.const import PROJECT_DIR


def test_uploading_files(http_duck: Client):
    parquet = f"{PROJECT_DIR}/e2e_tests/data/range.parquet"

    res = http_duck.execute_query("FROM 'range.parquet'", files=[parquet], response_format=ResponseFormat.COMPACT_JSON)

    assert res["statistics"]["rows"] == 42
