//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDDocument, WDListLevel;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    WDListLevel *mListLevel;	// 16 = 0x10
    unsigned char mLevel;	// 24 = 0x18
    long long mStartNumber;	// 32 = 0x20
    _Bool mStartNumberOverridden;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f3c04
- (id)description;	// IMP=0x00000000003f3bc6
- (_Bool)isListLevelOverridden;	// IMP=0x00000000003f3bb8
- (id)mutableListLevel;	// IMP=0x00000000001cc21e
- (id)listLevel;	// IMP=0x00000000003f3baa
- (_Bool)isStartNumberOverridden;	// IMP=0x00000000003f3ba1
- (void)setStartNumber:(long long)arg1;	// IMP=0x0000000000165712
- (long long)startNumber;	// IMP=0x00000000003f3b97
- (unsigned char)level;	// IMP=0x00000000003f3b8d
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;	// IMP=0x00000000003f3b0a

@end
