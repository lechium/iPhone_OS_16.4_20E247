//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary, NSString;

@interface STStatusRequest_MessagesItemStatesItemReasonItem : CEMPayloadBase
{
    NSString *_code;	// 16 = 0x10
    NSDictionary *_ANY;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;	// IMP=0x002000000009c3e4
+ (id)buildWithCode:(id)arg1;	// IMP=0x001000000009c38e
+ (id)allowedKeys;	// IMP=0x001000000009c2eb
- (void).cxx_destruct;	// IMP=0x002000000009cad1
@property(copy, nonatomic) NSDictionary *ANY; // @synthesize ANY=_ANY;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009c9f8
- (id)serializePayload;	// IMP=0x001000000009c7c8
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009c43a

@end
