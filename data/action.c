Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_reg_find("Text=Integrations Directory · GitHub", 
		LAST);

	web_url("integrations", 
		"URL=https://github.com/integrations?page=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160217; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=af9ecab10371ef48bbabaf22ddf7958e&CS=1&LV=201602&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=ee6a5f9908b3184399a250a7764b0bf3&HASH=995f&LV=201602&V=4&LU=1456320179357; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAB9CAAABUYoNEVEDXiUCHOfpJKHgQ!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("mp_1d92e3abd14a2d65f748d1314dd24b99_mixpanel=%7B%22distinct_id%22%3A%20%221556f06383060-0f54e3b0ab6c068-4c294829-f4146-1556f0638314c%22%2C%22VWO-Test-ID-1184%22%3A%20%22Control%22%2C%22%24initial_referrer%22%3A%20%22%24direct%22%2C%22%24initial_referring_domain%22%3A%20%22%24direct%22%7D; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("_vwo_uuid=AE1F1BD12D51B03CE0831317810D47DA; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("TocPosition=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=01E6704E7C8065BF26E879CF78806331; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("gssLANG=en-us; DOMAIN=iecvlist.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1479242656000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}