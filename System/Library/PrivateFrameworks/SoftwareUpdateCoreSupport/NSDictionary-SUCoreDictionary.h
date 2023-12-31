//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SUCoreDictionary)
+ (id)safeSummaryForDictionary:(id)arg1;	// IMP=0x0050000000021fd2
+ (id)_safeValueName:(id)arg1 ofMaxFieldLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3;	// IMP=0x0050000000021931
+ (id)_safeKeyName:(id)arg1 paddedToLength:(unsigned long long)arg2;	// IMP=0x005000000002180e
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 fromBase:(id)arg4 withKeyDescription:(id)arg5;	// IMP=0x00100000000221a5
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3;	// IMP=0x001000000002217f
- (void)_logReturningDefault:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 defaultValueName:(id)arg4;	// IMP=0x0010000000022047
- (id)safeSummary;	// IMP=0x0010000000021caa
- (id)safeSubDescriptionAtNestedLevel:(unsigned long long)arg1 instanceAtLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;	// IMP=0x00100000000214c5
- (id)_safeDescriptionWithName:(id)arg1 atNestedLevel:(unsigned long long)arg2 maxNestedLevel:(unsigned long long)arg3 showingSubLevelName:(_Bool)arg4 withMaxValueLength:(unsigned long long)arg5 providingSubstitutionMap:(id)arg6;	// IMP=0x0010000000020d2e
- (id)safeDescriptionWithName:(id)arg1 maxNestedLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;	// IMP=0x0010000000020d06
- (id)safeDescriptionWithName:(id)arg1;	// IMP=0x0010000000020cd9
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0010000000020beb
- (id)safeDateForKey:(id)arg1;	// IMP=0x0010000000020a83
- (id)safeDataForKey:(id)arg1;	// IMP=0x001000000002098d
- (id)safeDictionaryForKey:(id)arg1 fromBase:(id)arg2 withKeyDescription:(id)arg3;	// IMP=0x0010000000020893
- (id)safeDictionaryForKey:(id)arg1;	// IMP=0x001000000002087c
- (id)safeStringForKey:(id)arg1;	// IMP=0x00100000000207d3
- (long long)safeTriStateForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00100000000205de
- (long long)safeTriStateForKey:(id)arg1;	// IMP=0x00100000000205c7
- (long long)safeIntegerForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00100000000204da
- (long long)safeIntegerForKey:(id)arg1;	// IMP=0x001000000002047a
- (unsigned long long)safeULLForKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x001000000002038d
- (unsigned long long)safeULLForKey:(id)arg1;	// IMP=0x0010000000020379
- (long long)safeLLForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x001000000002028c
- (long long)safeLLForKey:(id)arg1;	// IMP=0x0010000000020278
- (_Bool)safeBooleanForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00100000000201b7
- (_Bool)safeBooleanForKey:(id)arg1;	// IMP=0x00100000000201a3
@end

