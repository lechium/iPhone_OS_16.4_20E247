//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UITextAttributeDictionary : NSDictionary
{
}

+ (id)alloc;	// IMP=0x006000000002e4e2
+ (id)new;	// IMP=0x006000000002e4d1
- (id)sparseDictionary;	// IMP=0x000000000002e511
- (_Bool)ignoresFallbackForKey:(id)arg1;	// IMP=0x000000000002e509
- (_Bool)usesFallbackForKey:(id)arg1;	// IMP=0x000000000002e501
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;	// IMP=0x000000000002e4f3

// Remaining properties
@property(readonly, nonatomic) id <_UITextAttributeDefaults> fallback; // @dynamic fallback;

@end

