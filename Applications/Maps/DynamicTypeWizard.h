//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable;

@interface DynamicTypeWizard : NSObject
{
    NSMapTable *_labelToFontMap;	// 8 = 0x8
    NSMapTable *_constraintToValueMap;	// 16 = 0x10
    NSMapTable *_stackToValueMap;	// 24 = 0x18
    NSDictionary *_objectToSelectorStringMaps;	// 32 = 0x20
}

+ (id)_singletonInstance;	// IMP=0x0040000000af9ca0
+ (void)unregisterObject:(id)arg1;	// IMP=0x0010000000af9aaa
+ (void)makeObject:(id)arg1 performSelector:(SEL)arg2 whenSizeCategoryChangesWithOrder:(unsigned long long)arg3;	// IMP=0x0010000000af997e
+ (void)stopAutoscalingStackView:(id)arg1;	// IMP=0x0010000000af98ed
+ (void)autoscaleStackView:(id)arg1 spacing:(double)arg2 withFontProvider:(CDUnknownBlockType)arg3;	// IMP=0x0010000000af97d6
+ (void)updateUnscaledConstantValue:(double)arg1 fontProvider:(CDUnknownBlockType)arg2 forConstraint:(id)arg3;	// IMP=0x0010000000af96e0
+ (id)autoscaledConstraint:(id)arg1 constant:(double)arg2 withFontProvider:(CDUnknownBlockType)arg3;	// IMP=0x0010000000af949d
+ (void)autorefreshLabel:(id)arg1 withFontProvider:(CDUnknownBlockType)arg2;	// IMP=0x0010000000af93a2
- (void).cxx_destruct;	// IMP=0x0020000000afa7f3
@property(retain, nonatomic) NSDictionary *objectToSelectorStringMaps; // @synthesize objectToSelectorStringMaps=_objectToSelectorStringMaps;
@property(retain, nonatomic) NSMapTable *stackToValueMap; // @synthesize stackToValueMap=_stackToValueMap;
@property(retain, nonatomic) NSMapTable *constraintToValueMap; // @synthesize constraintToValueMap=_constraintToValueMap;
@property(retain, nonatomic) NSMapTable *labelToFontMap; // @synthesize labelToFontMap=_labelToFontMap;
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000af9fe3
- (id)init;	// IMP=0x0010000000af9d25

@end

