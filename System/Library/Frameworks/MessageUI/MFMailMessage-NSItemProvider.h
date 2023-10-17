//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFMailMessage.h>

@class NSArray, NSString;

@interface MFMailMessage (NSItemProvider)
+ (_Bool)dragItemsAreAllMessages:(id)arg1;	// IMP=0x00100000000e2490
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000000e16ea
- (void)_loadMessageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e22c1
- (id)_attributedSubject;	// IMP=0x00100000000e20a9
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1f3b
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x00100000000e1dae
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end
