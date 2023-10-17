//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IPCShieldInfoMessage
{
    int _shieldID;	// 8 = 0x8
    NSString *_shieldStringID;	// 16 = 0x10
    NSString *_shieldText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000025e4c
@property(copy, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(copy, nonatomic) NSString *shieldStringID; // @synthesize shieldStringID=_shieldStringID;
@property(nonatomic) int shieldID; // @synthesize shieldID=_shieldID;
- (id)description;	// IMP=0x0010000000025cd2
- (id)dictionaryValue;	// IMP=0x0010000000025b53
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000025a30

@end
