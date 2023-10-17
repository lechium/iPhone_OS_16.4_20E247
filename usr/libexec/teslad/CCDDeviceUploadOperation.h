//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSMutableData, NSURLSession;

@interface CCDDeviceUploadOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    CDUnknownBlockType _deviceUploadCompletionBlock;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSMutableData *_responseData;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000026b5
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType deviceUploadCompletionBlock; // @synthesize deviceUploadCompletionBlock=_deviceUploadCompletionBlock;
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000002472

@end
