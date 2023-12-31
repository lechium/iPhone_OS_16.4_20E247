//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@class NSString;

@interface NSValue (BSCoding)
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x00100000000799e0
+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000000798a0
+ (id)bs_valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x001000000007985b
+ (id)bs_valueWithCGSize:(struct CGSize)arg1;	// IMP=0x0010000000079816
+ (id)bs_valueWithCGRect:(struct CGRect)arg1;	// IMP=0x00100000000797e2
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0010000000079bd4
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0010000000079a3e
- (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000000079a0f
- (struct CGAffineTransform)bs_CGAffineTransformValue;	// IMP=0x0010000000079995
- (struct CGPoint)bs_CGPointValue;	// IMP=0x0010000000079956
- (struct CGSize)bs_CGSizeValue;	// IMP=0x0010000000079917
- (struct CGRect)bs_CGRectValue;	// IMP=0x00100000000798d4
- (_Bool)bs_getValue:(out void *)arg1 ofSize:(unsigned long long)arg2;	// IMP=0x0010000000079767

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

