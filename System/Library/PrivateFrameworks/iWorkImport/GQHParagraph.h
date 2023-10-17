//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHParagraph : NSObject
{
}

+ (int)handleInlineList:(id)arg1 state:(id)arg2;	// IMP=0x008000000002ee85
+ (int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(struct __CFDictionary *)arg3 isMultiColumn:(_Bool)arg4;	// IMP=0x008000000002ecd8
+ (int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4 isMultiColumn:(_Bool)arg5;	// IMP=0x0080000000030341
+ (_Bool)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float *)arg2;	// IMP=0x008000000003024c
+ (id)getBulletStyle:(id)arg1 level:(int)arg2;	// IMP=0x008000000003021b
+ (void)mapBullet:(struct __CFDictionary *)arg1 state:(id)arg2;	// IMP=0x008000000003012e
+ (struct __CFDictionary *)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(struct __CFDictionary *)arg5 showBullet:(_Bool)arg6;	// IMP=0x008000000002f9f3
+ (_Bool)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(struct __CFDictionary *)arg4;	// IMP=0x008000000002f67a
+ (int)handleBookmark:(id)arg1 state:(id)arg2;	// IMP=0x008000000002f5d3
+ (int)handleLink:(id)arg1 state:(id)arg2;	// IMP=0x008000000002f412

@end
