//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, GEORPFeedbackImageUploadResult, GEORPFeedbackRequest, NSArray, NSProgress;
@protocol FeedbackUploaderStepObserver;

@protocol FeedbackUploading <NSObject>
@property(nonatomic) __weak id <FeedbackUploaderStepObserver> uploadStepObserver;
- (void)submitPhotosWithMetadata:(NSArray *)arg1 withImageUploadResult:(GEORPFeedbackImageUploadResult *)arg2 withCorrectionsRequest:(GEORPFeedbackRequest *)arg3 traits:(GEOMapServiceTraits *)arg4 parentProgress:(NSProgress *)arg5 completion:(void (^)(GEORPFeedbackResponse *, NSError *))arg6;
- (void)submitCorrectionsRequest:(GEORPFeedbackRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 parentProgress:(NSProgress *)arg3 completion:(void (^)(GEORPFeedbackResponse *, NSError *))arg4;
@end
