//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession, RAPCorrectionsStorage, RAPImageResponseStorage, RAPImageStorage;
@protocol FeedbackUploaderStepObserver;

@interface BackgroundFeedbackUploader : NSObject
{
    RAPCorrectionsStorage *_correctionsStorage;	// 8 = 0x8
    RAPImageStorage *_imageStorage;	// 16 = 0x10
    RAPImageResponseStorage *_imageResponseStorage;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    id <FeedbackUploaderStepObserver> _uploadStepObserver;	// 40 = 0x28
}

+ (id)resubmissionDateWithRetryCount:(long long)arg1;	// IMP=0x0020000000562e05
- (void).cxx_destruct;	// IMP=0x0020000000566499
@property(nonatomic) __weak id <FeedbackUploaderStepObserver> uploadStepObserver; // @synthesize uploadStepObserver=_uploadStepObserver;
- (void)_handleCorrectionsResponse:(id)arg1 withData:(id)arg2 withTaskDescription:(id)arg3;	// IMP=0x001000000056552c
- (void)_handleImageUploadResponse:(id)arg1 withData:(id)arg2 withTaskDescription:(id)arg3;	// IMP=0x001000000056511d
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000564fa6
- (void)_dispatchCorrectionsUploadForSubmissionIdentifier:(id)arg1 newRetryCount:(long long)arg2 isPOIEnrichment:(_Bool)arg3;	// IMP=0x0010000000564ccb
- (void)_dispatchImageUploadForImageURL:(id)arg1 submissionIdentifier:(id)arg2 clientImageIdentifier:(id)arg3 httpType:(id)arg4 newRetryCount:(long long)arg5;	// IMP=0x0010000000564a34
- (void)_logResponse:(id)arg1;	// IMP=0x0010000000564906
- (void)_handleCorrectionsResubmissionWithSubmissionIdentifier:(id)arg1 newRetryCount:(long long)arg2;	// IMP=0x0010000000564168
- (void)_handleCorrectionsUploadTask:(id)arg1 withSessionError:(id)arg2;	// IMP=0x0010000000563dca
- (void)_handleImageResubmissionWithUploadURL:(id)arg1 submissionIdentifier:(id)arg2 imageIdentifier:(id)arg3 httpType:(id)arg4 newRetryCount:(long long)arg5;	// IMP=0x0010000000563c77
- (void)_handleImageUploadTask:(id)arg1 withSessionError:(id)arg2;	// IMP=0x00100000005636ef
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000005635a2
- (void)imageStorage:(id)arg1 didFinishRemovingAllImagesForClientSubmissionIdentifier:(id)arg2;	// IMP=0x001000000056328c
- (void)updateEventsForBackgroundURLSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000562e8d
- (_Bool)_saveAttachedImages:(id)arg1 andUpdateCorrectionsRequest:(id)arg2 withImageUploadInfoResult:(id)arg3 submissionIdentifier:(id)arg4;	// IMP=0x0010000000562b30
- (_Bool)_saveCorrections:(id)arg1 submissionIdentifier:(id)arg2 addARPCHeaders:(_Bool)arg3;	// IMP=0x00100000005628c9
- (void)submitPhotosWithMetadata:(id)arg1 withImageUploadResult:(id)arg2 withCorrectionsRequest:(id)arg3 traits:(id)arg4 parentProgress:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000562523
- (void)submitCorrectionsRequest:(id)arg1 traits:(id)arg2 parentProgress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000005623d7
- (id)initWithUploadStepObserver:(id)arg1;	// IMP=0x0010000000562265

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
