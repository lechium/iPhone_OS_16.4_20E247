//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EMKEmojiTokenList : NSObject
{
    NSArray *_emojiTokenArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002bde
- (id)description;	// IMP=0x0000000000002ab3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002aa8
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000002a92
- (id)emojiTokenAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000002a7c
@property(readonly) unsigned long long count;
@property(readonly) NSArray *emojiTokenArray;
- (id)initWithEmojiTokenArray:(id)arg1;	// IMP=0x00000000000029dc

@end

