//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, CEMFontDeclaration, NSString;
@protocol DMDRemoteAssetResolver;

@interface CEMFontInstallOperation : CATOperation
{
    CEMFontDeclaration *_fontDeclaration;	// 8 = 0x8
    id <DMDRemoteAssetResolver> _resolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000644d
@property(retain, nonatomic) id <DMDRemoteAssetResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) CEMFontDeclaration *fontDeclaration; // @synthesize fontDeclaration=_fontDeclaration;
- (void)assetResolutionFailedWithError:(id)arg1;	// IMP=0x00100000000063b9
- (void)assetResolutionDidSucceedWithAssetURL:(id)arg1;	// IMP=0x00100000000060b3
@property(readonly, copy, nonatomic) CEMAssetBaseReference *assetReference;
@property(readonly, copy, nonatomic) CEMAssetBaseDescriptor *assetDescriptor;
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
- (void)main;	// IMP=0x0010000000005eee
- (_Bool)isAsynchronous;	// IMP=0x0010000000005ee6
- (id)initWithFontDeclaration:(id)arg1 resolver:(id)arg2;	// IMP=0x0010000000005e44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

