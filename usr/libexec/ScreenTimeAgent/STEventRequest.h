//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface STEventRequest : CEMPayloadBase
{
    NSString *_requestType;	// 16 = 0x10
    NSString *_UDID;	// 24 = 0x18
    NSString *_userShortName;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000032829
+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;	// IMP=0x0010000000032403
- (void).cxx_destruct;	// IMP=0x0020000000032c40
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000032ae3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000328aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000032831
- (id)serialize;	// IMP=0x00100000000326fd
- (_Bool)loadEventFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000324cb

@end

