#include "queue_ops.h"

#include "caffe2/core/context_gpu.h"

namespace caffe2 {

namespace {

REGISTER_CUDA_OPERATOR(CreateBlobsQueue, CreateBlobsQueueOp<CUDAContext>);
REGISTER_CUDA_OPERATOR(EnqueueBlobs, EnqueueBlobsOp<CUDAContext>);
REGISTER_CUDA_OPERATOR(DequeueBlobs, DequeueBlobsOp<CUDAContext>);
REGISTER_CUDA_OPERATOR(CloseBlobsQueue, CloseBlobsQueueOp<CUDAContext>);

}

}
