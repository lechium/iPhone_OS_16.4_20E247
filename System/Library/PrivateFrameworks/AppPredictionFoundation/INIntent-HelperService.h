//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@interface INIntent (HelperService)
+ (id)atx_createEventIntentWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0060000000004ec9
+ (id)atx_createIntentWithIntentType:(id)arg1 intentData:(id)arg2;	// IMP=0x0060000000004a5a
+ (_Bool)shouldDenyConnectionForCurrentProcess;	// IMP=0x00600000000035a2
- (_Bool)atx_supportsBackgroundExecution;	// IMP=0x001000000000478d
- (_Bool)atx_isEligibleForWidgets;	// IMP=0x0010000000004448
- (long long)atx_indexingHash;	// IMP=0x0010000000004183
- (id)atx_subtitleWithEfficientLocalization;	// IMP=0x0010000000003e2f
- (id)atx_titleWithEfficientLocalization;	// IMP=0x0010000000003adb
- (id)atx_titleWithoutLocalizing;	// IMP=0x00100000000036ab
- (unsigned long long)atx_titleLengthWithoutLocalizing;	// IMP=0x0010000000003667
@end
