//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDUpdateAppOperation
{
    _Bool _didPromptUser;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0040000000083b23
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000083a68
@property(nonatomic) _Bool didPromptUser; // @synthesize didPromptUser=_didPromptUser;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000008517b
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000085073
- (void)_showUpdateFailurePromptIfNeededForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000084d92
- (void)_startUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000084750
- (void)_promptIfNeededAndUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000084102
- (void)_resumeUpdateForBundleIdentifier:(id)arg1;	// IMP=0x0010000000083f96
- (void)_runWithRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000083d51
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000083bf2
- (void)endOperationWithError:(id)arg1;	// IMP=0x0010000000083b91
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0010000000083b30

@end
