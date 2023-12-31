//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface REAudioGroupPayload
{
    NSObject<OS_xpc_object> *_buffer;	// 8 = 0x8
    NSArray *_payloads;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000265616
- (void).cxx_destruct;	// IMP=0x0000000000265b65
@property(readonly, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002659ed
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002656a0
- (id)initWithPayloads:(id)arg1;	// IMP=0x000000000026561e

@end

