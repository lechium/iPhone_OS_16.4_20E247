//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCTextOfferMetadata : ASCOfferMetadata
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000045e4f
- (void).cxx_destruct;	// IMP=0x00000000000463a5
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isText;	// IMP=0x000000000004637b
- (id)description;	// IMP=0x000000000004629f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004610c
- (unsigned long long)hash;	// IMP=0x000000000004605a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045f86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045e57
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0000000000045d88

@end
