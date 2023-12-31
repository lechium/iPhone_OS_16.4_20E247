//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ASCIconOfferMetadata
{
    NSString *_animationName;	// 8 = 0x8
    NSString *_baseImageName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000179c3
- (void).cxx_destruct;	// IMP=0x0020000000017fca
@property(readonly, copy, nonatomic) NSString *baseImageName; // @synthesize baseImageName=_baseImageName;
@property(readonly, copy, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
- (_Bool)isIcon;	// IMP=0x0010000000017fa0
- (id)imageNameForSize:(id)arg1;	// IMP=0x0010000000017f2a
- (id)description;	// IMP=0x0010000000017e4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017cbb
- (unsigned long long)hash;	// IMP=0x0010000000017c09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000017b35
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000179cb
- (id)initWithBaseImageName:(id)arg1 animationName:(id)arg2;	// IMP=0x00100000000178fc

@end

