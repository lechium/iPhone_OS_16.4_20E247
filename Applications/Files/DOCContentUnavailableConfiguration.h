//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCContentUnavailableButtonProperties, NSString, UIImage;

@interface DOCContentUnavailableConfiguration
{
}

+ (id)searchConfiguration;	// IMP=0x0020000000010977
+ (id)loadingConfiguration;	// IMP=0x0010000000010920
+ (id)emptyProminentConfiguration;	// IMP=0x00100000000108c9
+ (Class)implClass;	// IMP=0x00100000000108aa
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x0020000000010cde
- (id)makeContentView;	// IMP=0x0010000000010c8e
@property(readonly, nonatomic) DOCContentUnavailableButtonProperties *buttonProperties;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIImage *image;
- (id)asUIKit;	// IMP=0x00100000000108bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

