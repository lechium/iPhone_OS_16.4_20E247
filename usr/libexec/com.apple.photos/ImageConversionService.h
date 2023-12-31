//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaConversionQueue, NSString, NSXPCListener;

@interface ImageConversionService : NSObject
{
    long long _pendingRequestCount;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    MediaConversionQueue *_requestQueue;	// 24 = 0x18
}

+ (id)adjustmentInformationForComposition:(id)arg1 error:(id *)arg2;	// IMP=0x002000000001c364
+ (void)configureCompositionController:(id)arg1 sourceURLCollection:(id)arg2;	// IMP=0x001000000001c161
+ (void)run;	// IMP=0x001000000001c134
- (void).cxx_destruct;	// IMP=0x002000000001bfcd
@property(retain) MediaConversionQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property long long pendingRequestCount; // @synthesize pendingRequestCount=_pendingRequestCount;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001bc78
- (void)conversionQueueDidFinishProcessingEntry:(id)arg1;	// IMP=0x001000000001baf5
- (void)conversionQueue:(id)arg1 processNextEntry:(id)arg2;	// IMP=0x001000000001b4a2
- (id)adjustmentInformationForCropAdjustmentInformation:(id)arg1 sourceURLCollection:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001b002
- (id)urlCollectionForBookmarkDictionaryKey:(id)arg1 inOptions:(id)arg2 removeExistingEmptyFiles:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000001abcf
- (id)performPhotosPortraitAdjustmentsCalculationForURL:(id)arg1 contentType:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000001a9e2
- (_Bool)convertImageWithOptions:(id)arg1 sourceURLCollection:(id)arg2 outputURLCollection:(id)arg3 outputData:(id *)arg4 outputFileType:(id *)arg5 outputImageInfo:(id *)arg6 error:(id *)arg7;	// IMP=0x001000000001928a
- (void)enumerateEnvironmentVariablePairsInRequestOptions:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018ece
- (void)performEndRequestActionsForUnitTestSupportOptions:(id)arg1;	// IMP=0x0010000000018e38
- (void)performBeginRequestActionsForUnitTestSupportOptions:(id)arg1;	// IMP=0x0010000000018d30
- (void)decrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x0010000000018c59
- (void)replyToCompletionHandler:(CDUnknownBlockType)arg1 requestIdentifier:(id)arg2 resultData:(id)arg3 resultImageInformation:(id)arg4 signpostID:(unsigned long long)arg5 error:(id)arg6;	// IMP=0x0010000000018b77
- (long long)incrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x0010000000018a91
- (_Bool)validatePhotosAdjustmentsCalculationRequestOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000018874
- (_Bool)validateRequestOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000018365
- (_Bool)setupSourceAndDestinationForRequestTracker:(id)arg1 imageConversionOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000018132
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018053
- (void)convertImageWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001785a
- (void)run;	// IMP=0x00100000000177a5
- (id)init;	// IMP=0x00100000000176b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

