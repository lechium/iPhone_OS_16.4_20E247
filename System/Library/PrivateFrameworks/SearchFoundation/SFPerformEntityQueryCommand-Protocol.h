//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFSymbolImage;

@protocol SFPerformEntityQueryCommand <SFCommand>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFColor *entityBackgroundColor;
@property(copy, nonatomic) NSString *entityIdentifier;
@property(nonatomic) int entityType;
@property(retain, nonatomic) SFSymbolImage *symbolImage;
@property(copy, nonatomic) NSString *tokenString;
@property(copy, nonatomic) NSString *searchString;
@end
