//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCredentialRequestIconGenerator : NSObject
{
}

+ (id)_systemImageNamed:(id)arg1;	// IMP=0x00400000000246e4
+ (id)_iconForPasswordProviderBundleIdentifier:(id)arg1;	// IMP=0x004000000002461f
+ (id)_keychainIcon;	// IMP=0x00400000000245ae
+ (id)_providerIconForPasswordLoginChoice:(id)arg1;	// IMP=0x0040000000024509
+ (id)_imageForIcon:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x004000000002435e
+ (id)_iconForData:(id)arg1 scale:(double)arg2 size:(struct CGSize)arg3;	// IMP=0x0040000000024208
+ (id)_iconForApplicationIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00400000000240d3
+ (id)_iconForPresentationContext:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0040000000023f3e
+ (id)alternativeSecurityKeysIcon;	// IMP=0x0040000000023ecd
+ (id)systemSecurityKeysIcon;	// IMP=0x0040000000023e57
+ (id)systemPasswordIcon;	// IMP=0x0040000000023dda
+ (id)systemPasskeyIcon;	// IMP=0x0040000000023d64
+ (id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:(id)arg1;	// IMP=0x0040000000023cd1
+ (id)passwordManagerIcon;	// IMP=0x0040000000023cbf
+ (id)iconForPasswordLoginChoice:(id)arg1 presentationContext:(id)arg2;	// IMP=0x0040000000023c48
+ (id)headerIconForPresentationContext:(id)arg1;	// IMP=0x0040000000023bd3

@end
