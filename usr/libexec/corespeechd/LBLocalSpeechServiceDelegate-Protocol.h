//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFSpeechInfoPackage, AFSpeechPackage, AFVoiceIdScoreCard, NSArray, NSDictionary, NSError, NSString;

@protocol LBLocalSpeechServiceDelegate <NSObject>
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2 metadata:(AFSpeechInfoPackage *)arg3;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 speechPackage:(AFSpeechPackage *)arg3 duration:(double)arg4 metadata:(AFSpeechInfoPackage *)arg5;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(AFVoiceIdScoreCard *)arg1;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(NSDictionary *)arg1 requestId:(NSString *)arg2 endpointMode:(long long)arg3 error:(NSError *)arg4;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 shouldAccept:(_Bool)arg3 mitigationSignal:(_Bool)arg4 featuresToLog:(NSArray *)arg5;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(NSString *)arg1 rcId:(unsigned long long)arg2 speechPackage:(AFSpeechPackage *)arg3 duration:(double)arg4;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(NSString *)arg1 speechPackage:(AFSpeechPackage *)arg2;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3;
@end

