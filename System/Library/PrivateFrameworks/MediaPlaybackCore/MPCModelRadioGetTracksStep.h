//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICRadioGetTracksRequest, ICRadioGetTracksResponse, ICUserIdentityProperties, NSError;

__attribute__((visibility("hidden")))
@interface MPCModelRadioGetTracksStep : NSObject
{
    NSError *_error;	// 8 = 0x8
    _Bool _finished;	// 16 = 0x10
    ICUserIdentityProperties *_identityProperties;	// 24 = 0x18
    ICUserIdentityProperties *_delegatedIdentityProperties;	// 32 = 0x20
    ICRadioGetTracksRequest *_request;	// 40 = 0x28
    ICRadioGetTracksResponse *_response;	// 48 = 0x30
    ICRadioGetTracksResponse *_siriAssetInfoGetTracksResponse;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000031d244
@property(readonly, nonatomic) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse; // @synthesize siriAssetInfoGetTracksResponse=_siriAssetInfoGetTracksResponse;
@property(readonly, copy, nonatomic) ICRadioGetTracksResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) ICRadioGetTracksRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // @synthesize delegatedIdentityProperties=_delegatedIdentityProperties;
- (void)_presentServerDialog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000031d068
- (void)_performDefaultHandlingForButtonAction:(id)arg1;	// IMP=0x000000000031cfdf
- (void)_fireAndForgetServerDialog:(id)arg1;	// IMP=0x000000000031cf93
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000031cf82
- (id)nextStepWithError:(id)arg1;	// IMP=0x000000000031cf03
- (id)initWithPreviousStep:(id)arg1;	// IMP=0x000000000031ce77
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2;	// IMP=0x000000000031ca05

@end
