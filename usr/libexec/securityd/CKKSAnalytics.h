//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/SFAnalytics.h>

@interface CKKSAnalytics : SFAnalytics
{
}

+ (id)logger;	// IMP=0x004000000015933b
+ (id)databasePath;	// IMP=0x00100000001592fc
- (void)recordRecoveredTLKMetrics:(id)arg1 tlkRecoveryResults:(id)arg2 uniqueTLKsRecoveredEvent:(id)arg3 totalSharesRecoveredEvent:(id)arg4 totalRecoverableTLKSharesEvent:(id)arg5 totalRecoverableTLKsEvent:(id)arg6 totalViewsWithSharesEvent:(id)arg7;	// IMP=0x0040000000158e3a
- (void)noteMetric:(id)arg1 count:(long long)arg2;	// IMP=0x0010000000158d35
- (id)datePropertyForKey:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000158cc0
- (void)setDateProperty:(id)arg1 forKey:(id)arg2 zoneName:(id)arg3;	// IMP=0x0010000000158c30
- (id)dateOfLastSuccessForEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000158bbe
- (void)noteEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000158b5f
- (void)noteEvent:(id)arg1;	// IMP=0x0010000000158b4d
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x001000000015887f
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 zoneName:(id)arg3 withAttributes:(id)arg4;	// IMP=0x001000000015858d
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x00100000001582d1
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 zoneName:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0010000000157ff2
- (id)createErrorAttributes:(id)arg1 depth:(unsigned long long)arg2 attributes:(id)arg3;	// IMP=0x0010000000157da2
- (id)errorChain:(id)arg1 depth:(unsigned long long)arg2;	// IMP=0x0010000000157b8a
- (void)addCKPartialError:(id)arg1 error:(id)arg2 depth:(unsigned long long)arg3;	// IMP=0x00100000001577fb
- (_Bool)isCKPartialError:(id)arg1;	// IMP=0x001000000015776e
- (void)logSuccessForEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000157661

@end
