//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIAssertionController;

__attribute__((visibility("hidden")))
@interface _UIAssertionBase : NSObject
{
    _Bool _initialState;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    _Bool _requiresExplicitInvalidation;	// 10 = 0xa
    unsigned long long _type;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    _UIAssertionController *_parentController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000098c23f
@property(readonly, nonatomic) _Bool requiresExplicitInvalidation; // @synthesize requiresExplicitInvalidation=_requiresExplicitInvalidation;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) __weak _UIAssertionController *parentController; // @synthesize parentController=_parentController;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool initialState; // @synthesize initialState=_initialState;
- (void)dealloc;	// IMP=0x000000000098c11c
@property(readonly, copy) NSString *description;
- (void)_invalidate;	// IMP=0x000000000098bff1
- (id)_initWithType:(unsigned long long)arg1 initialState:(_Bool)arg2 reason:(id)arg3 requiresExplicitInvalidation:(_Bool)arg4;	// IMP=0x000000000098bf5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
