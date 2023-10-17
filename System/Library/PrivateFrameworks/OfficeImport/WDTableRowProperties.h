//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterProperties, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : NSObject
{
    WDTableProperties *mTableProperties;	// 8 = 0x8
    WDCharacterProperties *mCharacterProperties;	// 16 = 0x10
    unsigned int mOriginal:1;	// 24 = 0x18
    unsigned int mTracked:1;	// 24 = 0x18
    unsigned int mResolved:1;	// 24 = 0x18
    CDStruct_43955328 mOriginalProperties;	// 32 = 0x20
    CDStruct_43955328 mTrackedProperties;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004054f1
- (id)description;	// IMP=0x00000000004054b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004053e0
- (_Bool)isHeaderOverridden;	// IMP=0x00000000004053a5
- (void)setHeader:(_Bool)arg1;	// IMP=0x00000000001de44e
- (_Bool)header;	// IMP=0x000000000040537b
- (_Bool)isHeightTypeOverridden;	// IMP=0x0000000000405339
- (void)setHeightType:(int)arg1;	// IMP=0x0000000000159a90
- (int)heightType;	// IMP=0x0000000000405308
- (_Bool)isHeightOverridden;	// IMP=0x00000000000f93f2
- (void)setHeight:(long long)arg1;	// IMP=0x0000000000159abe
- (long long)height;	// IMP=0x000000000015c51a
- (_Bool)isWidthAfterTypeOverridden;	// IMP=0x00000000004052c6
- (void)setWidthAfterType:(int)arg1;	// IMP=0x00000000001dec39
- (int)widthAfterType;	// IMP=0x0000000000405295
- (_Bool)isWidthAfterOverridden;	// IMP=0x0000000000405253
- (void)setWidthAfter:(short)arg1;	// IMP=0x00000000001dec0a
- (short)widthAfter;	// IMP=0x0000000000405223
- (_Bool)isWidthBeforeTypeOverridden;	// IMP=0x00000000004051e2
- (void)setWidthBeforeType:(int)arg1;	// IMP=0x00000000001625a1
- (int)widthBeforeType;	// IMP=0x00000000004051b1
- (_Bool)isWidthBeforeOverridden;	// IMP=0x000000000040516c
- (void)setWidthBefore:(short)arg1;	// IMP=0x0000000000162572
- (short)widthBefore;	// IMP=0x000000000040513c
- (void)addProperties:(id)arg1;	// IMP=0x00000000004050ca
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000e555c
- (int)resolveMode;	// IMP=0x00000000004050a8
- (id)characterProperties;	// IMP=0x00000000000e56b8
- (id)tableProperties;	// IMP=0x00000000000e554e
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000e4ecd
- (id)init;	// IMP=0x000000000040509a
- (void)addPropertiesValues:(CDStruct_43955328 *)arg1 to:(CDStruct_43955328 *)arg2;	// IMP=0x0000000000405519

@end
