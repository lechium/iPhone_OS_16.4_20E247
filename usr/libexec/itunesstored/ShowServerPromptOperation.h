//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x00200000000abf90
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x00100000000abd7c
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x00100000000abd31
- (void)run;	// IMP=0x00100000000ab816
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x00100000000ab7b6
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x00100000000ab758
- (id)init;	// IMP=0x00100000000ab744

@end
