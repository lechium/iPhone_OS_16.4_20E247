//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioAnalytics, FTLatnnMitigatorResult, FTRecognitionResult, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableRecognitionCandidate
{
}

@property(copy, nonatomic) NSString *request_locale;
@property(copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property(copy, nonatomic) NSString *language;
@property(nonatomic) double watermark_peak_average;
@property(nonatomic) long long watermark_detection;
@property(copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property(nonatomic) long long fingerprint_detection;
@property(nonatomic) double snr;
@property(copy, nonatomic) NSString *result_id;
@property(copy, nonatomic) FTRecognitionResult *recognition_result;
@property(copy, nonatomic) NSString *return_str;
@property(nonatomic) int return_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154349
- (id)init;	// IMP=0x00000000001542bb

@end
