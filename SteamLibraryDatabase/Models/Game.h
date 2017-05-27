//
//  TOSteamGame.h
//  SteamLibraryDatabase
//
//  Created by Tim Oliver on 5/26/17.
//  Copyright © 2017 Tim Oliver. All rights reserved.
//

#import <Realm/Realm.h>

#import "PlatformRequirements.h"
#import "Publisher.h"
#import "Developer.h"
#import "Movie.h"
#import "Game.h"
#import "Screenshot.h"

@interface Game : RLMObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) uint64_t appID;
@property (nonatomic, strong) NSDate *releaseDate;

@property (nonatomic, copy) NSString *detailedDescription;
@property (nonatomic, copy) NSString *aboutDescription;
@property (nonatomic, copy) NSString *shortDescription;
@property (nonatomic, copy) NSString *languages;

@property (nonatomic, strong) RLMArray<Screenshot *> *screenshots;
@property (nonatomic, strong) RLMArray<Movie *> *movies;

@property (nonatomic, strong) RLMArray<Developer *> *developers;
@property (nonatomic, strong) RLMArray<Publisher *> *publishers;

@property (nonatomic, strong) PlatformRequirements *pcRequirements;
@property (nonatomic, strong) PlatformRequirements *macRequirements;
@property (nonatomic, strong) PlatformRequirements *linuxRequirements;

@property (nonatomic, copy) NSString *headerImageURL;
@property (nonatomic, copy) NSString *backgroundImageURL;

@property (nonatomic, copy) NSString *legalNotice;

@end
