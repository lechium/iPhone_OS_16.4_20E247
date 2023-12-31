//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LADecriptionBuilder : NSObject
{
    NSObject *_object;	// 8 = 0x8
    NSMutableDictionary *_components;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000694f
- (id)build;	// IMP=0x000000000000685b
- (void)appendObject:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000067b1
- (void)appendInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000006700
- (void)appendBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x00000000000066d3
- (void)appendString:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000006626
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000065a8

@end

