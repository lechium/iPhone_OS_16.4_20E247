//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI229PersonalizationScriptTestCase : NSObject
{
    MISSING_TYPE *tagService;	// 8 = 0x8
    MISSING_TYPE *personalizationData;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_dataStore;	// 32 = 0x20
    MISSING_TYPE *commandCenter;	// 40 = 0x28
    MISSING_TYPE *tracker;	// 56 = 0x38
    MISSING_TYPE *testName;	// 64 = 0x40
    MISSING_TYPE *timeoutInSeconds;	// 80 = 0x50
    MISSING_TYPE *aggregate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000009dfe40
- (id)init;	// IMP=0x00000000009dfde0
- (void)runTestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009dfd50
@property(nonatomic, readonly) unsigned long long aggregate; // @synthesize aggregate;
@property(nonatomic, readonly) double timeoutInSeconds; // @synthesize timeoutInSeconds;
@property(nonatomic, readonly) NSString *testName;

@end

