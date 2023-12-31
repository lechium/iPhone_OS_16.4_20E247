//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLScaledProgress, NSData, NSString, NSURL;

@interface CRLImageFillProvider : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    CRLScaledProgress *_progress;	// 32 = 0x20
    _Bool _cancelled;	// 40 = 0x28
}

+ (void)p_makeCompatibleImageFillDataForFill:(_Bool)arg1 withFillProvider:(id)arg2 forAssetOwner:(id)arg3 modalOperationPresenter:(id)arg4 compatibilityAlertPresenter:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00200000003f6d3f
+ (void)makeCompatibleImageFillDataFromURL:(id)arg1 forAssetOwner:(id)arg2 modalOperationPresenter:(id)arg3 compatibilityAlertPresenter:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000003f6c48
+ (void)makeCompatibleImageDataFromURL:(id)arg1 forAssetOwner:(id)arg2 modalOperationPresenter:(id)arg3 compatibilityAlertPresenter:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000003f6b54
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000003f4b10
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x00100000003f4af7
- (void).cxx_destruct;	// IMP=0x00200000003f7af2
- (void)p_convertImageData:(id)arg1 toCompatibilityLevel:(long long)arg2 assetOwner:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000003f65a0
- (void)p_provideImageDataForAssetOwner:(id)arg1 data:(id)arg2 modalOperationPresenter:(id)arg3 compatibilityAlertPresenter:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000003f59df
- (void)provideImageDataForAssetOwner:(id)arg1 modalOperationPresenter:(id)arg2 compatibilityAlertPresenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000003f51bd
- (void)provideImageDataForAssetOwner:(id)arg1 compatibilityAlertPresenter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000003f51a3
- (void)p_continueWorkOnMainThreadWithModalOperationPresenter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003f515f
- (void)cancel;	// IMP=0x00100000003f5155
- (id)init;	// IMP=0x00100000003f4e6d
- (id)initWithURL:(id)arg1;	// IMP=0x00100000003f4ddb
- (id)initWithData:(id)arg1 type:(id)arg2;	// IMP=0x00100000003f4d15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

