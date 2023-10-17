//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BackgroundFeedbackUploader, FeedbackSubmissionPostActionManager, GEOObserverHashTable, InteractiveFeedbackUploader, NSProgress, NSString;

@interface FeedbackSubmissionManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    InteractiveFeedbackUploader *_interactiveFeedbackUploader;	// 16 = 0x10
    BackgroundFeedbackUploader *_backgroundFeedbackUploader;	// 24 = 0x18
    FeedbackSubmissionPostActionManager *_feedbackSubmissionPostActionManager;	// 32 = 0x20
    NSProgress *_currentProgress;	// 40 = 0x28
}

+ (_Bool)canHandleSessionIdentifier:(id)arg1;	// IMP=0x00200000006611b6
+ (_Bool)isStatusCodeSuccess:(long long)arg1;	// IMP=0x00100000006611a2
+ (id)badFeedbackResponseErrorWithCode:(long long)arg1;	// IMP=0x001000000066117c
+ (id)failedToEnqueueSubmissionError;	// IMP=0x0010000000661152
- (void).cxx_destruct;	// IMP=0x0020000000662588
@property(readonly, nonatomic) NSProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)removeObserver:(id)arg1;	// IMP=0x001000000066250c
- (void)addObserver:(id)arg1;	// IMP=0x001000000066249a
- (id)observers;	// IMP=0x0010000000662429
- (void)_recordRAPSubmissionID:(id)arg1;	// IMP=0x0010000000662160
- (void)_updateSpamStatusWithResponse:(id)arg1 request:(id)arg2;	// IMP=0x0010000000661ffe
- (void)_sendTdmFraudNotificationWithFraudReportResponse:(id)arg1 tdmRequestInfo:(id)arg2;	// IMP=0x0010000000661bec
- (void)_startFraudScoreExchangeIfNeededWithResponse:(id)arg1 request:(id)arg2;	// IMP=0x00100000006616b7
- (void)finishedCorrectionsUploadWithResponse:(id)arg1 request:(id)arg2 error:(id)arg3;	// IMP=0x00100000006612fc
- (void)finishedUploadingImagesWithImageUpdate:(id)arg1 correctionsRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000006611d2
- (id)_feedbackUploaderForUploadPolicy:(long long)arg1;	// IMP=0x0010000000661124
- (void)_logDiscardIfNeededForFeedback:(id)arg1 userInfo:(id)arg2 feedbackObjectToUpdate:(id)arg3;	// IMP=0x0010000000660e46
- (void)_submitOrEnqueueFeedback:(id)arg1 resolvedUserInfo:(id)arg2 traits:(id)arg3 debugSettings:(id)arg4 uploadPolicy:(long long)arg5 feedbackObjectToUpdate:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000660b9e
- (void)submitOrEnqueueFeedback:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 debugSettings:(id)arg4 uploadPolicy:(long long)arg5 feedbackObjectToUpdate:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000066094d
- (void)_updateUserInfo:(id)arg1 requestParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000006602b7
- (void)_submitOrEnqueueFeedback:(id)arg1 attachedImages:(id)arg2 resolvedUserInfo:(id)arg3 traits:(id)arg4 debugSettings:(id)arg5 uploadPolicy:(long long)arg6 feedbackObjectToUpdate:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000065f69c
- (void)submitOrEnqueueFeedback:(id)arg1 attachedImages:(id)arg2 userInfo:(id)arg3 traits:(id)arg4 debugSettings:(id)arg5 uploadPolicy:(long long)arg6 feedbackObjectToUpdate:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000065f303
- (void)submitOrEnqueueFeedback:(id)arg1 attachedImages:(id)arg2 userInfo:(id)arg3 traits:(id)arg4 uploadPolicy:(long long)arg5 feedbackObjectToUpdate:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000065f2ce
- (id)init;	// IMP=0x001000000065f1bb
- (void)updateEventsForBackgroundURLSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000065f1a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
