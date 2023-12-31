//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSDictionary, NSString;

@interface ASCLockupRequest : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    NSDictionary *_mediaQueryParams;	// 32 = 0x20
    NSString *_clientID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001375a
+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 minExternalVersionID:(id)arg4 latestReleaseID:(id)arg5 productVariantID:(id)arg6;	// IMP=0x00100000000146cb
+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;	// IMP=0x0010000000014846
- (void).cxx_destruct;	// IMP=0x001000000001445d
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSDictionary *mediaQueryParams; // @synthesize mediaQueryParams=_mediaQueryParams;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
- (id)_lockupRequestWithClientID:(id)arg1;	// IMP=0x00100000000143e0
- (id)lockupRequestByAddingMediaQueryParams:(id)arg1;	// IMP=0x0010000000014316
- (id)lockupRequestWithMediaQueryParams:(id)arg1;	// IMP=0x00100000000142cb
- (id)clone;	// IMP=0x00100000000141c6
- (id)description;	// IMP=0x0010000000013ff4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000013c69
- (unsigned long long)hash;	// IMP=0x0010000000013b23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013b18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000139cc
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000013762
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x0010000000013668
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 minExternalVersionID:(id)arg4 latestReleaseID:(id)arg5 productVariantID:(id)arg6;	// IMP=0x00100000000144a6
- (id)lockupRequestWithClientID:(id)arg1;	// IMP=0x00100000000148f7
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;	// IMP=0x00100000000147be

@end

