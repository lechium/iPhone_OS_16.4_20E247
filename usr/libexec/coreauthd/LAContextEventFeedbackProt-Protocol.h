//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSError;

@protocol LAContextEventFeedbackProt
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)setCredential:(NSData *)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (MISSING_TYPE *)resetProcessedEvent:reply: /* Error: Ran out of types for this method. */;
- (void)retryProcessedEvent:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

