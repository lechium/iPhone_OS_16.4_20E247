//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVTCompositor : NSObject
{
    NSMutableSet *_textureProviders;	// 8 = 0x8
}

+ (id)propertyNames;	// IMP=0x004000000000b423
- (void).cxx_destruct;	// IMP=0x000000000000b85c
- (void)configureMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;	// IMP=0x000000000000b716
- (void)componentDidChangeForTypes:(unsigned long long)arg1;	// IMP=0x000000000000b5df
- (void)skinColorDidChange;	// IMP=0x000000000000b4b6
- (void)removeClient:(id)arg1;	// IMP=0x000000000000b4a0
- (void)addClient:(id)arg1;	// IMP=0x000000000000b48a
- (id)init;	// IMP=0x000000000000b42d

@end

