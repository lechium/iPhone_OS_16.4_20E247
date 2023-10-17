//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADShapeProperties, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADDrawableCategoryDefaults : NSObject
{
    OADShapeProperties *mShapeProperties;	// 8 = 0x8
    OADTextBodyProperties *mTextBodyProperties;	// 16 = 0x10
    OADTextListStyle *mTextListStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000328fd7
- (id)description;	// IMP=0x0000000000328f99
- (id)textListStyle;	// IMP=0x0000000000328f8b
- (void)setTextListStyle:(id)arg1;	// IMP=0x0000000000328f7a
- (id)textBodyProperties;	// IMP=0x0000000000328f6c
- (void)setTextBodyProperties:(id)arg1;	// IMP=0x0000000000328f5b
- (id)shapeProperties;	// IMP=0x0000000000328f4d
- (void)setShapeProperties:(id)arg1;	// IMP=0x0000000000328f3c
- (id)initWithDefaults;	// IMP=0x0000000000328e52
- (id)init;	// IMP=0x0000000000328da4

@end
