//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (AXUtilsPrivate)
+ (void)_accessibilityPerformValidations:(id)arg1;	// IMP=0x00200000000867a0
- (_Bool)_accessibilityInterposesAsOnboardingApp;	// IMP=0x0010000000003140
- (_Bool)_accessibilityInterposesAsSystemApplication;	// IMP=0x0010000000003120
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;	// IMP=0x0010000000014c50
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;	// IMP=0x0010000000014bb0
- (void)handleFailoversForClassNamed:(id)arg1;	// IMP=0x0010000000017880
- (void)_accessibilityPerformSafeValueKeyBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 onClass:(Class)arg3;	// IMP=0x00100000000173c0
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;	// IMP=0x0010000000017170
- (id)safeValueForKeyPath:(id)arg1;	// IMP=0x0010000000016f00
- (id)__axValueForKey:(id)arg1;	// IMP=0x0010000000016e90
- (id)safeValueForKey:(id)arg1;	// IMP=0x00100000000166a0
- (id)safeUIViewForKey:(id)arg1;	// IMP=0x0010000000016600
- (id)safeDictionaryForKey:(id)arg1;	// IMP=0x0010000000016560
- (id)safeSetForKey:(id)arg1;	// IMP=0x00100000000164c0
- (id)safeArrayForKey:(id)arg1;	// IMP=0x0010000000016420
- (id)safeStringForKey:(id)arg1;	// IMP=0x0010000000016380
- (struct CGRect)safeCGRectForKey:(id)arg1;	// IMP=0x00100000000162b0
- (struct CGSize)safeCGSizeForKey:(id)arg1;	// IMP=0x00100000000161e0
- (struct CGPoint)safeCGPointForKey:(id)arg1;	// IMP=0x0010000000016110
- (double)safeCGFloatForKey:(id)arg1;	// IMP=0x0010000000016090
- (struct _NSRange)safeRangeForKey:(id)arg1;	// IMP=0x0010000000015fd0
- (double)safeTimeIntervalForKey:(id)arg1;	// IMP=0x0010000000015f70
- (double)safeDoubleForKey:(id)arg1;	// IMP=0x0010000000015eb0
- (float)safeFloatForKey:(id)arg1;	// IMP=0x0010000000015df0
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;	// IMP=0x0010000000015ce0
- (long long)safeIntegerForKey:(id)arg1;	// IMP=0x0010000000015be0
- (unsigned int)safeUnsignedIntForKey:(id)arg1;	// IMP=0x0010000000015af0
- (int)safeIntForKey:(id)arg1;	// IMP=0x0010000000015a00
- (_Bool)safeBoolForKey:(id)arg1;	// IMP=0x0010000000015930
- (void *)safeIvarForKey:(id)arg1;	// IMP=0x0010000000015620
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(_Bool)arg1;	// IMP=0x0010000000069950
- (_Bool)_accessibilityIsSpeakThisTemporarilyDisabled;	// IMP=0x0010000000069920
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000879a0
- (void)_accessibilityRemoveValueForKey:(id)arg1;	// IMP=0x0010000000087940
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x00100000000878b0
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000087820
- (void)_accessibilitySetBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000087780
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000876f0
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3;	// IMP=0x0010000000086fc0
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;	// IMP=0x0010000000086f30
- (long long)_accessibilityIntegerValueForKey:(id)arg1;	// IMP=0x0010000000086ea0
- (_Bool)_accessibilityBoolValueForKey:(id)arg1;	// IMP=0x0010000000086e10
- (id)_accessibilityValueForKey:(id)arg1;	// IMP=0x00100000000868a0
- (id)_axDictionaryQueue;	// IMP=0x00100000000867e0
- (id)axTrampolineForClass:(Class)arg1;	// IMP=0x0010000000093950
- (id)axSuperTrampoline;	// IMP=0x00100000000938c0
@property(nonatomic, setter=_axSetIsWrappedPointer:) _Bool _axIsWrappedPointer;
- (id)ax_prettyDescription;	// IMP=0x001000000013d1d0
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;	// IMP=0x001000000013c4f0
@end
