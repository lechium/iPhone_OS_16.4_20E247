//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCXSTValidator : NSObject
{
    NSMutableDictionary *_simpleTypeMap;	// 8 = 0x8
}

+ (id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2;	// IMP=0x0060000000377901
+ (id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2;	// IMP=0x006000000037762c
+ (id)validator;	// IMP=0x00600000003775ad
+ (_Bool)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2;	// IMP=0x0060000000377315
+ (id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;	// IMP=0x00600000003771bc
- (void).cxx_destruct;	// IMP=0x0000000000377d45
- (id)simpleTypeMap;	// IMP=0x0000000000377f42
- (id)init;	// IMP=0x0000000000377d55

@end

