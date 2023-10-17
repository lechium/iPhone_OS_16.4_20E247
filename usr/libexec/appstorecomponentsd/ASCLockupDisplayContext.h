//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupDisplayContext : NSObject
{
    NSString *_headingKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000012395
- (void).cxx_destruct;	// IMP=0x002000000001270a
@property(readonly, retain, nonatomic) NSString *headingKind; // @synthesize headingKind=_headingKind;
- (id)description;	// IMP=0x0010000000012662
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000012557
- (unsigned long long)hash;	// IMP=0x00100000000124dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000124d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000012458
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001239d
- (id)initWithHeadingKind:(id)arg1;	// IMP=0x001000000001232a

@end
