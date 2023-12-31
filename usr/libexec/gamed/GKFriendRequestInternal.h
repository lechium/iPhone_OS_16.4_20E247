//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKFriendRequestInternal
{
    NSString *_message;	// 280 = 0x118
    NSDate *_date;	// 288 = 0x120
}

+ (id)secureCodedPropertyKeys;	// IMP=0x002000000011aa86
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011aa7e
+ (int)familiarity;	// IMP=0x00100000001c315e
- (void).cxx_destruct;	// IMP=0x002000000011ac5d
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (int)defaultFamiliarity;	// IMP=0x001000000011ac08

@end

