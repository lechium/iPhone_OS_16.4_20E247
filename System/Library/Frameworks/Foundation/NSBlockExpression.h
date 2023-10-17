//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSBlockExpression : NSExpression
{
    CDUnknownBlockType _block;	// 24 = 0x18
    NSArray *_arguments;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000551d44
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000005522bc
- (unsigned long long)expressionType;	// IMP=0x00000000005522b1
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x00000000005520c1
- (id)predicateFormat;	// IMP=0x0000000000552086
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000551e3e
- (id)arguments;	// IMP=0x0000000000551e2d
- (CDUnknownBlockType)expressionBlock;	// IMP=0x0000000000551e1c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000551de2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000551dae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000551d4c
- (void)dealloc;	// IMP=0x0000000000551cb6
- (id)initWithType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 arguments:(id)arg3;	// IMP=0x0000000000551c0b

@end
