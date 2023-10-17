//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLTrainerMLP : NSObject
{
    NSURL *_seedModelPath;	// 8 = 0x8
    struct CFScopedPtr<void *> _model;	// 16 = 0x10
    NSNumber *_initialLoss;	// 24 = 0x18
    NSNumber *_trainingLoss;	// 32 = 0x20
    unsigned long long _batchSize;	// 40 = 0x28
    NSNumber *_learningRate;	// 48 = 0x30
    NSNumber *_gradientClipMin;	// 56 = 0x38
    NSNumber *_gradientClipMax;	// 64 = 0x40
    NSNumber *_clippingNorm;	// 72 = 0x48
    unsigned long long _normBinCount;	// 80 = 0x50
    NSString *_privacyIdentifier;	// 88 = 0x58
}

+ (id)reportingStringForModelUpdates:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x006000000000c234
+ (struct __CFData *)copyToFlatBuffer:(void *)arg1;	// IMP=0x006000000000c136
+ (void)initialize;	// IMP=0x006000000000c0e8
- (id).cxx_construct;	// IMP=0x000000000000dde9
- (void).cxx_destruct;	// IMP=0x000000000000dd74
@property(readonly, nonatomic) NSString *privacyIdentifier; // @synthesize privacyIdentifier=_privacyIdentifier;
@property(readonly, nonatomic) NSNumber *trainingLoss; // @synthesize trainingLoss=_trainingLoss;
@property(readonly, nonatomic) NSNumber *initialLoss; // @synthesize initialLoss=_initialLoss;
@property(nonatomic) unsigned long long normBinCount; // @synthesize normBinCount=_normBinCount;
@property(retain, nonatomic) NSNumber *clippingNorm; // @synthesize clippingNorm=_clippingNorm;
@property(retain, nonatomic) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(retain, nonatomic) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(retain, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
- (void)writeModelToURL:(id)arg1;	// IMP=0x000000000000db94
- (id)getWeightUpdatesAddNoise:(_Bool)arg1 encryptionKey:(id)arg2 recipe:(id)arg3;	// IMP=0x000000000000cfc1
- (_Bool)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;	// IMP=0x000000000000c6dc
- (id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2;	// IMP=0x000000000000c552

@end
